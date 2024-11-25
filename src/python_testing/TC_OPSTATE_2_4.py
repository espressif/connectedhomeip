#
#    Copyright (c) 2024 Project CHIP Authors
#    All rights reserved.
#
#    Licensed under the Apache License, Version 2.0 (the "License");
#    you may not use this file except in compliance with the License.
#    You may obtain a copy of the License at
#
#        http://www.apache.org/licenses/LICENSE-2.0
#
#    Unless required by applicable law or agreed to in writing, software
#    distributed under the License is distributed on an "AS IS" BASIS,
#    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#    See the License for the specific language governing permissions and
#    limitations under the License.
#

# See https://github.com/project-chip/connectedhomeip/blob/master/docs/testing/python.md#defining-the-ci-test-arguments
# for details about the block below.
#
# === BEGIN CI TEST ARGUMENTS ===
# test-runner-runs:
#   run1:
#     app: ${ALL_CLUSTERS_APP}
#     app-args: --discriminator 1234 --KVS kvs1 --trace-to json:${TRACE_APP}.json
#     script-args: >
#       --endpoint 1
#       --int-arg PIXIT.OPSTATE.ErrorEventGen:1
#       --storage-path admin_storage.json
#       --commissioning-method on-network
#       --discriminator 1234
#       --passcode 20202021
#       --PICS src/app/tests/suites/certification/ci-pics-values
#       --trace-to json:${TRACE_TEST_JSON}.json
#       --trace-to perfetto:${TRACE_TEST_PERFETTO}.perfetto
#     factory-reset: true
#     quiet: true
# === END CI TEST ARGUMENTS ===


import chip.clusters as Clusters
from chip.testing.matter_testing import MatterBaseTest, TestStep, async_test_body, default_matter_test_main
from TC_OpstateCommon import TC_OPSTATE_BASE, TestInfo


class TC_OPSTATE_2_4(MatterBaseTest, TC_OPSTATE_BASE):
    def __init__(self, *args):
        super().__init__(*args)

        test_info = TestInfo(
            pics_code="OPSTATE",
            cluster=Clusters.OperationalState
        )

        super().setup_base(test_info=test_info)

    def steps_TC_OPSTATE_2_4(self) -> list[TestStep]:
        return self.STEPS_TC_OPSTATE_BASE_2_4()

    def pics_TC_OPSTATE_2_4(self) -> list[str]:
        return ["OPSTATE.S"]

    @async_test_body
    async def test_TC_OPSTATE_2_4(self):
        endpoint = self.get_endpoint(default=1)

        await self.TEST_TC_OPSTATE_BASE_2_4(endpoint=endpoint)


if __name__ == "__main__":
    default_matter_test_main()
