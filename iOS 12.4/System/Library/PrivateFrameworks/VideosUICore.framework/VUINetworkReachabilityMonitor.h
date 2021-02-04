/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VUINetworkReachabilityMonitor : NSObject {

	BOOL _networkReachable;
	id _networkTypeChangedNotificationToken;
	id _networkReachabilityChangedNotificationToken;

}

@property (getter=isNetworkReachable) BOOL networkReachable;                              //@synthesize networkReachable=_networkReachable - In the implementation block
@property (nonatomic,retain) id networkTypeChangedNotificationToken;                      //@synthesize networkTypeChangedNotificationToken=_networkTypeChangedNotificationToken - In the implementation block
@property (nonatomic,retain) id networkReachabilityChangedNotificationToken;              //@synthesize networkReachabilityChangedNotificationToken=_networkReachabilityChangedNotificationToken - In the implementation block
+(BOOL)_isNetworkReachable;
+(id)sharedInstance;
-(BOOL)isNetworkReachable;
-(void)setNetworkReachable:(BOOL)arg1 ;
-(id)init;
-(id)_init;
-(void)_updateNetworkReachability;
-(id)networkTypeChangedNotificationToken;
-(void)setNetworkTypeChangedNotificationToken:(id)arg1 ;
-(id)networkReachabilityChangedNotificationToken;
-(void)setNetworkReachabilityChangedNotificationToken:(id)arg1 ;
@end
