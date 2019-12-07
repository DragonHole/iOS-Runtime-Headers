/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol WiFiRecommendation
@property (nonatomic,copy,readonly) NSString * SSID; 
@property (nonatomic,readonly) id<WiFiCandidateNetwork> network; 
@property (nonatomic,readonly) long long priority; 
@property (nonatomic,readonly) id<WiFiScannedNetwork> scannedNetwork; 
@property (nonatomic,readonly) BOOL unwantedNetworkName; 
@required
-(long long)priority;
-(id<WiFiCandidateNetwork>)network;
-(NSString *)SSID;
-(id<WiFiScannedNetwork>)scannedNetwork;
-(BOOL)unwantedNetworkName;

@end
