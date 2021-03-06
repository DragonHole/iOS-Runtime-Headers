/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol TBAccessPoint <NSObject,TBScorable>
@property (nonatomic,readonly) NSString * BSSID; 
@property (nonatomic,readonly) double latitude; 
@property (nonatomic,readonly) double longitude; 
@property (getter=isEdge,nonatomic,readonly) BOOL edge; 
@property (getter=isTCPGood,nonatomic,readonly) BOOL TCPGood; 
@required
-(id)dictionaryRepresentation;
-(double)latitude;
-(double)longitude;
-(NSString *)BSSID;
-(BOOL)isEdge;
-(BOOL)isTCPGood;

@end

