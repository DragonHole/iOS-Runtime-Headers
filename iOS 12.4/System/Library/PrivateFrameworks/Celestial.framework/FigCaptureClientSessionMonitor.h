/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigCaptureDisplayLayoutObserver.h>

@class NSString, NSArray, FigCaptureDisplayLayoutMonitor;

@interface FigCaptureClientSessionMonitor : NSObject <FigCaptureDisplayLayoutObserver> {

	/*^block*/id _applicationAndLayoutStateHandler;
	/*^block*/id _interruptionHandler;
	opaqueCMSessionRef _session;
	SCD_Struct_BW44 _clientAuditToken;
	int _pid;
	NSString* _applicationID;
	BOOL _isForThirdPartyTorch;
	NSArray* _avconferenceClientApplicationIDs;
	BOOL _clientCanInheritApplicationState;
	int _pidToInheritAppStateFrom;
	unsigned _bksApplicationState;
	BOOL _bksApplicationStateInitialized;
	NSString* _cachedApplicationIDToInheritAppStateFrom;
	NSString* _extensionHostApplicationID;
	OpaqueFigSimpleMutexRef _stateChangeLock;
	OpaqueFigSimpleMutexRef _sessionLock;
	int _applicationState;
	int _extensionHostApplicationState;
	int _resolvedExtensionApplicationState;
	int _layoutState;
	BOOL _layoutStateInitialized;
	id _applicationStateChangeNotificationToken;
	id _interruptionStateChangeNotificationToken;
	BOOL _invalid;
	BOOL _haveExternalCMSession;
	int _clientType;
	FigCaptureDisplayLayoutMonitor* _displayLayoutMonitor;

}

@property (nonatomic,readonly) opaqueCMSessionRef session;              //@synthesize session=_session - In the implementation block
@property (readonly) NSString * applicationID; 
@property (readonly) int applicationState; 
@property (readonly) int clientType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)startPrewarmingMonitorWithHandler:(/*^block*/id)arg1 ;
+(BOOL)_isSupportedExtensionClientType:(int)arg1 ;
+(id)_stringForApplicationState:(int)arg1 ;
+(id)_stringForClientType:(int)arg1 ;
+(id)_stringForBKSApplicationState:(unsigned)arg1 ;
+(id)_stringForClientLayoutState:(int)arg1 ;
+(int)_applicationStateForBKSApplicationState:(unsigned)arg1 clientType:(int)arg2 applicationID:(id)arg3 ;
+(int)_applicationStateForClientLayoutState:(int)arg1 clientType:(int)arg2 ;
+(void)stopPrewarmingMonitor;
+(void)initialize;
-(void)layoutMonitor:(id)arg1 didUpdateLayoutWithForegroundApps:(id)arg2 layoutState:(int)arg3 ;
-(int)observeSession:(opaqueCMSessionRef)arg1 ;
-(id)initWithClientAuditToken:(id)arg1 forThirdPartyTorch:(BOOL)arg2 applicationAndLayoutStateHandler:(/*^block*/id)arg3 interruptionHandler:(/*^block*/id)arg4 ;
-(id)initWithAVConferenceClientApplicationIDs:(id)arg1 applicationAndLayoutStateHandler:(/*^block*/id)arg2 interruptionHandler:(/*^block*/id)arg3 ;
-(void)_setUpApplicationInfo;
-(BOOL)_isApplicationStateMonitoringRequiredForClient;
-(BOOL)_isCMSessionInterruptionObservingRequiredForClient;
-(int)_createAndObserveCMSession;
-(BOOL)_isDisplayLayoutMonitoringRequiredForClient;
-(id)_initWithClientAuditToken:(id)arg1 forThirdPartyTorch:(BOOL)arg2 avconferenceClientApplicationIDs:(id)arg3 applicationAndLayoutStateHandler:(/*^block*/id)arg4 interruptionHandler:(/*^block*/id)arg5 ;
-(id)_resolveApplicationID;
-(void)_deregisterAndReleaseCMSession;
-(int)_registerCMSessionForObservation;
-(id)_logString;
-(void)_handleCMSessionManagerNofification:(id)arg1 ;
-(void)_updateApplicationState;
-(void)_notifyIfResolvedSupportedExtensionApplicationStateOrLayoutStateDidChangeUsingLayoutStateChanged:(BOOL)arg1 ;
-(void)_updateClientStateCondition:(void*)arg1 newValue:(id)arg2 ;
-(void)_handleApplicationStateChange:(unsigned)arg1 ;
-(int)_resolveApplicationState;
-(void)_handleAudioInterruptionChange:(int)arg1 ;
-(int)clientType;
-(NSString *)applicationID;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(opaqueCMSessionRef)session;
-(int)applicationState;
@end
