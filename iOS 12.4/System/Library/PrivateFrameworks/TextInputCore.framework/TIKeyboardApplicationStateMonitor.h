/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TIKeyboardApplicationStateResponses;
@class NSObject, BKSApplicationStateMonitor, NSString, NSMutableSet, NSDate, NSDictionary, NSLock, NSCalendar, NSMutableArray;

@interface TIKeyboardApplicationStateMonitor : NSObject {

	NSObject*<TIKeyboardApplicationStateResponses> _delegate;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	NSString* _activeAppBundleID;
	double _activeAppStartTime;
	NSMutableSet* _foregroundApps;
	NSDate* _activeAppStartDate;
	NSDictionary* _applicationStateDatabase;
	NSMutableSet* _imSuppressingBundleIDs;
	NSLock* _activeStateDataLock;
	NSLock* _databaseInUseLock;
	NSCalendar* _utcCalendar;
	NSMutableArray* _keyboardUsageTimes;
	double _activeKeyboardStartTime;

}

@property (nonatomic,retain) BKSApplicationStateMonitor * applicationStateMonitor;                        //@synthesize applicationStateMonitor=_applicationStateMonitor - In the implementation block
@property (nonatomic,retain) NSString * activeAppBundleID;                                                //@synthesize activeAppBundleID=_activeAppBundleID - In the implementation block
@property (assign,nonatomic) double activeAppStartTime;                                                   //@synthesize activeAppStartTime=_activeAppStartTime - In the implementation block
@property (nonatomic,retain) NSMutableSet * foregroundApps;                                               //@synthesize foregroundApps=_foregroundApps - In the implementation block
@property (nonatomic,retain) NSDate * activeAppStartDate;                                                 //@synthesize activeAppStartDate=_activeAppStartDate - In the implementation block
@property (nonatomic,retain) NSDictionary * applicationStateDatabase;                                     //@synthesize applicationStateDatabase=_applicationStateDatabase - In the implementation block
@property (nonatomic,retain) NSMutableSet * imSuppressingBundleIDs;                                       //@synthesize imSuppressingBundleIDs=_imSuppressingBundleIDs - In the implementation block
@property (nonatomic,retain) NSLock * activeStateDataLock;                                                //@synthesize activeStateDataLock=_activeStateDataLock - In the implementation block
@property (nonatomic,retain) NSLock * databaseInUseLock;                                                  //@synthesize databaseInUseLock=_databaseInUseLock - In the implementation block
@property (nonatomic,retain) NSCalendar * utcCalendar;                                                    //@synthesize utcCalendar=_utcCalendar - In the implementation block
@property (nonatomic,retain) NSMutableArray * keyboardUsageTimes;                                         //@synthesize keyboardUsageTimes=_keyboardUsageTimes - In the implementation block
@property (assign,nonatomic) double activeKeyboardStartTime;                                              //@synthesize activeKeyboardStartTime=_activeKeyboardStartTime - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<TIKeyboardApplicationStateResponses> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)applicationUninstalled:(id)arg1 ;
-(void)handleApplicationStateChange:(id)arg1 ;
-(void)startANewKeyboardActivity:(id)arg1 ;
-(void)logOutKeyboardActivity:(double)arg1 ;
-(void)keyboardInUse;
-(void)keyboardNoLongerInUse;
-(BOOL)ignoreAppExtension:(id)arg1 ;
-(void)setApplicationStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(NSString *)activeAppBundleID;
-(void)setActiveAppBundleID:(NSString *)arg1 ;
-(double)activeAppStartTime;
-(void)setActiveAppStartTime:(double)arg1 ;
-(void)setForegroundApps:(NSMutableSet *)arg1 ;
-(NSDate *)activeAppStartDate;
-(void)setActiveAppStartDate:(NSDate *)arg1 ;
-(NSDictionary *)applicationStateDatabase;
-(void)setApplicationStateDatabase:(NSDictionary *)arg1 ;
-(NSMutableSet *)imSuppressingBundleIDs;
-(void)setImSuppressingBundleIDs:(NSMutableSet *)arg1 ;
-(NSLock *)activeStateDataLock;
-(void)setActiveStateDataLock:(NSLock *)arg1 ;
-(NSLock *)databaseInUseLock;
-(void)setDatabaseInUseLock:(NSLock *)arg1 ;
-(NSCalendar *)utcCalendar;
-(void)setUtcCalendar:(NSCalendar *)arg1 ;
-(NSMutableArray *)keyboardUsageTimes;
-(void)setKeyboardUsageTimes:(NSMutableArray *)arg1 ;
-(double)activeKeyboardStartTime;
-(void)setActiveKeyboardStartTime:(double)arg1 ;
-(NSMutableSet *)foregroundApps;
-(BKSApplicationStateMonitor *)applicationStateMonitor;
-(id)databaseLocation;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(NSObject*<TIKeyboardApplicationStateResponses>)arg1 ;
-(NSObject*<TIKeyboardApplicationStateResponses>)delegate;
@end

