/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notes/Notes-Structs.h>
@interface ICReachability : NSObject {

	BOOL _alwaysReturnLocalWiFiStatus;
	SCNetworkReachabilityRef _reachabilityRef;

}
+(id)reachabilityForInternetConnection;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)sharedReachabilityForInternetConnection;
-(BOOL)startNotifier;
-(long long)currentReachabilityStatus;
-(void)stopNotifier;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)connectionRequired;
-(void)dealloc;
@end

