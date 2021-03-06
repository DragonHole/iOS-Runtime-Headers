/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEProvider.h>

@class NSArray;

@interface NEDNSProxyProvider : NEProvider {

	NSArray* _systemDNSSettings;

}

@property (retain) NSArray * systemDNSSettings;              //@synthesize systemDNSSettings=_systemDNSSettings - In the implementation block
-(void)setSystemDNSSettings:(NSArray *)arg1 ;
-(BOOL)handleNewFlow:(id)arg1 ;
-(void)startProxyWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopProxyWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelProxyWithError:(id)arg1 ;
-(NSArray *)systemDNSSettings;
@end

