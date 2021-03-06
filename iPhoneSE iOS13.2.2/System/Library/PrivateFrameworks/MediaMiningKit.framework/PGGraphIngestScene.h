/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PGGraphIngestScene <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) double relevance; 
@property (nonatomic,readonly) double confidence; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (nonatomic,readonly) unsigned long long numberOfHighConfidenceAssets; 
@property (nonatomic,readonly) unsigned long long numberOfSearchConfidenceAssets; 
@property (nonatomic,readonly) BOOL isReliable; 
@required
-(NSString *)identifier;
-(double)confidence;
-(unsigned long long)numberOfAssets;
-(BOOL)isReliable;
-(double)relevance;
-(unsigned long long)numberOfHighConfidenceAssets;
-(unsigned long long)numberOfSearchConfidenceAssets;

@end

