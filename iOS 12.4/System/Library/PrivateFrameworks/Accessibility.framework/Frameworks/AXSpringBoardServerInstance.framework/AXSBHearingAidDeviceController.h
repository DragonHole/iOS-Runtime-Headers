/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXSpringBoardServerInstance/AXUIClientDelegate.h>
#import <AXSpringBoardServerInstance/AXHAServerDelegate.h>

@protocol OS_dispatch_queue;
@class UIApplicationSceneClientSettingsDiffInspector, NSDictionary, NSTimer, NSObject, NSString;

@interface AXSBHearingAidDeviceController : NSObject <AXUIClientDelegate, AXHAServerDelegate> {

	UIApplicationSceneClientSettingsDiffInspector* _applicationSceneClientSettingsDiffInspector;
	double _routeChangedTime;
	BOOL isShowingHearingAidControl;
	BOOL _shouldIgnoreRouteChanges;
	BOOL _hearingAidIsConnected;
	BOOL _holdingMediaForConnection;
	BOOL _holdingPhoneForConnection;
	NSDictionary* _preferredRoute;
	NSTimer* _preferredRouteTimer;
	NSObject*<OS_dispatch_queue> _mediaUpdateQueue;

}

@property (assign,nonatomic) BOOL shouldIgnoreRouteChanges;                              //@synthesize shouldIgnoreRouteChanges=_shouldIgnoreRouteChanges - In the implementation block
@property (assign,nonatomic) BOOL isShowingHearingAidControl; 
@property (assign,nonatomic) BOOL hearingAidIsConnected;                                 //@synthesize hearingAidIsConnected=_hearingAidIsConnected - In the implementation block
@property (assign,nonatomic) BOOL holdingMediaForConnection;                             //@synthesize holdingMediaForConnection=_holdingMediaForConnection - In the implementation block
@property (assign,nonatomic) BOOL holdingPhoneForConnection;                             //@synthesize holdingPhoneForConnection=_holdingPhoneForConnection - In the implementation block
@property (nonatomic,retain) NSDictionary * preferredRoute;                              //@synthesize preferredRoute=_preferredRoute - In the implementation block
@property (nonatomic,retain) NSTimer * preferredRouteTimer;                              //@synthesize preferredRouteTimer=_preferredRouteTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mediaUpdateQueue;              //@synthesize mediaUpdateQueue=_mediaUpdateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)sharedController;
-(NSDictionary *)preferredRoute;
-(BOOL)isScreenLocked;
-(void)startServer;
-(void)audioRouteDidChange:(id)arg1 ;
-(void)hearingAidConnectionDidChange:(BOOL)arg1 ;
-(void)pickableAudioRoutesDidChange:(id)arg1 ;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(void)liveListenStatusBarActivated:(id)arg1 ;
-(void)mediaPlaybackDidChange:(id)arg1 ;
-(void)statusBarDidChange:(id)arg1 ;
-(void)userChangedRouteNotification:(id)arg1 ;
-(void)setMediaUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)showHearingAidControl:(BOOL)arg1 ;
-(id)hearingUIClient;
-(void)setIsShowingHearingAidControl:(BOOL)arg1 ;
-(void)sendUpdatedStatusBarStyle;
-(BOOL)isShowingHearingAidControl;
-(long long)effectiveStatusBarStyle;
-(NSTimer *)preferredRouteTimer;
-(void)setPreferredRouteTimer:(NSTimer *)arg1 ;
-(BOOL)shouldRequestAudioConnectionForCall:(BOOL)arg1 ;
-(void)_updateHearingAidAfterMediaPlayback:(BOOL)arg1 ;
-(BOOL)holdingMediaForConnection;
-(void)setHoldingMediaForConnection:(BOOL)arg1 ;
-(void)setPreferredRoute:(NSDictionary *)arg1 ;
-(BOOL)holdingPhoneForConnection;
-(void)setHoldingPhoneForConnection:(BOOL)arg1 ;
-(void)setHearingAidIsConnected:(BOOL)arg1 ;
-(BOOL)shouldIgnoreRouteChanges;
-(void)setShouldIgnoreRouteChanges:(BOOL)arg1 ;
-(void)serverDidDie:(id)arg1 ;
-(void)_lockStateChanged;
-(BOOL)hearingAidIsConnected;
-(NSObject*<OS_dispatch_queue>)mediaUpdateQueue;
-(id)init;
-(void)dealloc;
@end

