/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCReachabilityDelegate.h>

@class NSString;

@interface BRCReachabilityObserver : NSObject <BRCReachabilityDelegate> {

	/*^block*/id _networkReachabilityDidChangeHandler;

}

@property (nonatomic,copy) id networkReachabilityDidChangeHandler;              //@synthesize networkReachabilityDidChangeHandler=_networkReachabilityDidChangeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopObservingNetworkReachabilityChanges;
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(void)startObservingNetworkReachabilityChanges;
-(id)networkReachabilityDidChangeHandler;
-(void)setNetworkReachabilityDidChangeHandler:(id)arg1 ;
@end

