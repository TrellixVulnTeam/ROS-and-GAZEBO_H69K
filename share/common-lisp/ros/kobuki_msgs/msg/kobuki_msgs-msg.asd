
(cl:in-package :asdf)

(defsystem "kobuki_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :actionlib_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "VersionInfo" :depends-on ("_package_VersionInfo"))
    (:file "_package_VersionInfo" :depends-on ("_package"))
    (:file "MotorPower" :depends-on ("_package_MotorPower"))
    (:file "_package_MotorPower" :depends-on ("_package"))
    (:file "ScanAngle" :depends-on ("_package_ScanAngle"))
    (:file "_package_ScanAngle" :depends-on ("_package"))
    (:file "WheelDropEvent" :depends-on ("_package_WheelDropEvent"))
    (:file "_package_WheelDropEvent" :depends-on ("_package"))
    (:file "RobotStateEvent" :depends-on ("_package_RobotStateEvent"))
    (:file "_package_RobotStateEvent" :depends-on ("_package"))
    (:file "BumperEvent" :depends-on ("_package_BumperEvent"))
    (:file "_package_BumperEvent" :depends-on ("_package"))
    (:file "ButtonEvent" :depends-on ("_package_ButtonEvent"))
    (:file "_package_ButtonEvent" :depends-on ("_package"))
    (:file "KeyboardInput" :depends-on ("_package_KeyboardInput"))
    (:file "_package_KeyboardInput" :depends-on ("_package"))
    (:file "ControllerInfo" :depends-on ("_package_ControllerInfo"))
    (:file "_package_ControllerInfo" :depends-on ("_package"))
    (:file "PowerSystemEvent" :depends-on ("_package_PowerSystemEvent"))
    (:file "_package_PowerSystemEvent" :depends-on ("_package"))
    (:file "Led" :depends-on ("_package_Led"))
    (:file "_package_Led" :depends-on ("_package"))
    (:file "ExternalPower" :depends-on ("_package_ExternalPower"))
    (:file "_package_ExternalPower" :depends-on ("_package"))
    (:file "DigitalOutput" :depends-on ("_package_DigitalOutput"))
    (:file "_package_DigitalOutput" :depends-on ("_package"))
    (:file "SensorState" :depends-on ("_package_SensorState"))
    (:file "_package_SensorState" :depends-on ("_package"))
    (:file "Sound" :depends-on ("_package_Sound"))
    (:file "_package_Sound" :depends-on ("_package"))
    (:file "CliffEvent" :depends-on ("_package_CliffEvent"))
    (:file "_package_CliffEvent" :depends-on ("_package"))
    (:file "DigitalInputEvent" :depends-on ("_package_DigitalInputEvent"))
    (:file "_package_DigitalInputEvent" :depends-on ("_package"))
    (:file "DockInfraRed" :depends-on ("_package_DockInfraRed"))
    (:file "_package_DockInfraRed" :depends-on ("_package"))
    (:file "AutoDockingActionFeedback" :depends-on ("_package_AutoDockingActionFeedback"))
    (:file "_package_AutoDockingActionFeedback" :depends-on ("_package"))
    (:file "AutoDockingActionGoal" :depends-on ("_package_AutoDockingActionGoal"))
    (:file "_package_AutoDockingActionGoal" :depends-on ("_package"))
    (:file "AutoDockingActionResult" :depends-on ("_package_AutoDockingActionResult"))
    (:file "_package_AutoDockingActionResult" :depends-on ("_package"))
    (:file "AutoDockingResult" :depends-on ("_package_AutoDockingResult"))
    (:file "_package_AutoDockingResult" :depends-on ("_package"))
    (:file "AutoDockingGoal" :depends-on ("_package_AutoDockingGoal"))
    (:file "_package_AutoDockingGoal" :depends-on ("_package"))
    (:file "AutoDockingFeedback" :depends-on ("_package_AutoDockingFeedback"))
    (:file "_package_AutoDockingFeedback" :depends-on ("_package"))
    (:file "AutoDockingAction" :depends-on ("_package_AutoDockingAction"))
    (:file "_package_AutoDockingAction" :depends-on ("_package"))
  ))