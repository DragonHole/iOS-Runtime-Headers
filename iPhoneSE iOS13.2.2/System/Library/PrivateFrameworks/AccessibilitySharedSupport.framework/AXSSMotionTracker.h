/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXSSMotionTrackingDaemonDelegateProtocol.h>

@protocol AXSSMotionTrackerDelegate;
@class NSString, NSXPCConnection;

@interface AXSSMotionTracker : NSObject <AXSSMotionTrackingDaemonDelegateProtocol> {

	BOOL _debugOverlayEnabled;
	BOOL __tracking;
	BOOL __hasBeenStarted;
	unsigned long long _motionTrackingMode;
	double _sensitivity;
	double _joystickModeMovementThreshold;
	NSString* _desiredCaptureDeviceUniqueID;
	id<AXSSMotionTrackerDelegate> _delegate;
	NSXPCConnection* __motionTrackingDaemonConnection;

}

@property (nonatomic,readonly) id<AXSSMotionTrackingDaemonProtocol> _motionTrackingDaemon; 
@property (nonatomic,retain) NSXPCConnection * _motionTrackingDaemonConnection;                         //@synthesize _motionTrackingDaemonConnection=__motionTrackingDaemonConnection - In the implementation block
@property (assign,nonatomic) BOOL _tracking;                                                            //@synthesize _tracking=__tracking - In the implementation block
@property (assign,nonatomic) BOOL _hasBeenStarted;                                                      //@synthesize _hasBeenStarted=__hasBeenStarted - In the implementation block
@property (assign,nonatomic) BOOL debugOverlayEnabled;                                                  //@synthesize debugOverlayEnabled=_debugOverlayEnabled - In the implementation block
@property (getter=isTracking,nonatomic,readonly) BOOL tracking; 
@property (assign,nonatomic,__weak) id<AXSSMotionTrackerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long motionTrackingMode;                                     //@synthesize motionTrackingMode=_motionTrackingMode - In the implementation block
@property (assign,nonatomic) double sensitivity;                                                        //@synthesize sensitivity=_sensitivity - In the implementation block
@property (nonatomic,copy) NSString * desiredCaptureDeviceUniqueID;                                     //@synthesize desiredCaptureDeviceUniqueID=_desiredCaptureDeviceUniqueID - In the implementation block
@property (assign,nonatomic) double joystickModeMovementThreshold;                                      //@synthesize joystickModeMovementThreshold=_joystickModeMovementThreshold - In the implementation block
+(id)supportedExpressions;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<AXSSMotionTrackerDelegate>)delegate;
-(void)setDelegate:(id<AXSSMotionTrackerDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(BOOL)_tracking;
-(BOOL)isTracking;
-(double)sensitivity;
-(void)setSensitivity:(double)arg1 ;
-(NSXPCConnection *)_motionTrackingDaemonConnection;
-(BOOL)_hasBeenStarted;
-(void)setMotionTrackingMode:(unsigned long long)arg1 ;
-(void)setDesiredCaptureDeviceUniqueID:(NSString *)arg1 ;
-(void)setJoystickModeMovementThreshold:(double)arg1 ;
-(void)motionTrackingDaemonTrackedPoint:(id)arg1 ;
-(void)motionTrackingDaemonExpressionStarted:(id)arg1 ;
-(void)motionTrackingDaemonExpressionEnded:(id)arg1 ;
-(void)motionTrackingDaemonWasInterrupted;
-(void)motionTrackingDaemonFoundFace;
-(void)motionTrackingDaemonLostFace;
-(void)motionTrackingDaemonFailedToTrackFaceWithError:(id)arg1 ;
-(void)_motionTrackingDaemonWasInterrupted;
-(void)set_motionTrackingDaemonConnection:(NSXPCConnection *)arg1 ;
-(id<AXSSMotionTrackingDaemonProtocol>)_motionTrackingDaemon;
-(unsigned long long)motionTrackingMode;
-(double)joystickModeMovementThreshold;
-(NSString *)desiredCaptureDeviceUniqueID;
-(void)set_tracking:(BOOL)arg1 ;
-(BOOL)debugOverlayEnabled;
-(void)setDebugOverlayEnabled:(BOOL)arg1 ;
-(void)set_hasBeenStarted:(BOOL)arg1 ;
@end

