/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCPrivateDataContext.h>

@protocol FCPushNotificationHandling, FCPrivateDataContextInternal, FCContentContext;
@class FCIssueReadingHistory, FCPersonalizationData, FCPrivateChannelMembershipController, FCReadingHistory, FCReadingList, FCSubscriptionList, FCUserInfo, NSString, FCTagSettings, FCNetworkBehaviorMonitor;

@interface FCPrivateDataContext : NSObject <FCPrivateDataContext> {

	BOOL _privateDataSyncingEnabled;
	FCIssueReadingHistory* _issueReadingHistory;
	FCPersonalizationData* _personalizationData;
	FCPrivateChannelMembershipController* _privateChannelMembershipController;
	FCReadingHistory* _readingHistory;
	FCReadingList* _readingList;
	FCSubscriptionList* _subscriptionList;
	FCUserInfo* _userInfo;
	NSString* _privateDataDirectory;
	FCTagSettings* _tagSettings;
	id<FCPushNotificationHandling> _privatePushNotificationHandler;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;
	id<FCPrivateDataContextInternal> _internalPrivateDataContext;
	id<FCContentContext> _contentContext;

}

@property (nonatomic,retain) id<FCPrivateDataContextInternal> internalPrivateDataContext;                              //@synthesize internalPrivateDataContext=_internalPrivateDataContext - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                                                      //@synthesize contentContext=_contentContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FCIssueReadingHistory * issueReadingHistory;                                            //@synthesize issueReadingHistory=_issueReadingHistory - In the implementation block
@property (nonatomic,readonly) FCPersonalizationData * personalizationData;                                            //@synthesize personalizationData=_personalizationData - In the implementation block
@property (nonatomic,readonly) FCPrivateChannelMembershipController * privateChannelMembershipController;              //@synthesize privateChannelMembershipController=_privateChannelMembershipController - In the implementation block
@property (nonatomic,readonly) FCReadingHistory * readingHistory;                                                      //@synthesize readingHistory=_readingHistory - In the implementation block
@property (nonatomic,readonly) FCReadingList * readingList;                                                            //@synthesize readingList=_readingList - In the implementation block
@property (nonatomic,readonly) FCSubscriptionList * subscriptionList;                                                  //@synthesize subscriptionList=_subscriptionList - In the implementation block
@property (nonatomic,readonly) FCUserInfo * userInfo;                                                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) FCTagSettings * tagSettings;                                                            //@synthesize tagSettings=_tagSettings - In the implementation block
@property (nonatomic,readonly) FCNetworkBehaviorMonitor * networkBehaviorMonitor;                                      //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (nonatomic,readonly) id<FCPushNotificationHandling> privatePushNotificationHandler;                          //@synthesize privatePushNotificationHandler=_privatePushNotificationHandler - In the implementation block
@property (getter=isPrivateDataSyncingEnabled,nonatomic,readonly) BOOL privateDataSyncingEnabled;                      //@synthesize privateDataSyncingEnabled=_privateDataSyncingEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDataDirectory;                                                   //@synthesize privateDataDirectory=_privateDataDirectory - In the implementation block
-(FCPersonalizationData *)personalizationData;
-(FCSubscriptionList *)subscriptionList;
-(NSString *)privateDataDirectory;
-(FCTagSettings *)tagSettings;
-(FCPrivateChannelMembershipController *)privateChannelMembershipController;
-(FCReadingHistory *)readingHistory;
-(FCReadingList *)readingList;
-(id<FCPrivateDataContextInternal>)internalPrivateDataContext;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 privateDataHostDirectory:(id)arg3 privateDataActionProvider:(id)arg4 encryptionDelegate:(id)arg5 networkBehaviorMonitor:(id)arg6 privateDataSyncingEnabled:(BOOL)arg7 iCloudAccountChanged:(BOOL)arg8 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 privateDatabase:(id)arg3 privateDataDirectory:(id)arg4 privateDataActionProvider:(id)arg5 encryptionDelegate:(id)arg6 networkBehaviorMonitor:(id)arg7 privateDataSyncingEnabled:(BOOL)arg8 iCloudAccountChanged:(BOOL)arg9 ;
-(FCIssueReadingHistory *)issueReadingHistory;
-(id<FCContentContext>)contentContext;
-(BOOL)isPrivateDataSyncingEnabled;
-(id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id<FCPushNotificationHandling>)privatePushNotificationHandler;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(void)setInternalPrivateDataContext:(id<FCPrivateDataContextInternal>)arg1 ;
-(id)init;
-(FCUserInfo *)userInfo;
@end

