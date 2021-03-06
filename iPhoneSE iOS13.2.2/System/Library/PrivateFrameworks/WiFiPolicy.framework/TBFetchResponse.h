/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSError, NSSet, NSDictionary;


@protocol TBFetchResponse <NSObject>
@property (nonatomic,readonly) NSArray * results; 
@property (nonatomic,copy,readonly) NSError * error; 
@property (nonatomic,readonly) NSSet * tiles; 
@property (nonatomic,readonly) NSDictionary * resultsByBSSID; 
@optional
-(NSDictionary *)resultsByBSSID;

@required
-(NSError *)error;
-(NSArray *)results;
-(NSSet *)tiles;

@end

