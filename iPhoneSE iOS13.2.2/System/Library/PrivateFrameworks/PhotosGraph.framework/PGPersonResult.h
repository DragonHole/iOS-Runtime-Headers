/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol PGPersonResult <NSObject>
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * contactIdentifier; 
@property (nonatomic,readonly) NSString * suggestedContactIdentifier; 
@property (nonatomic,readonly) BOOL isVerified; 
@property (nonatomic,readonly) BOOL isInferredChild; 
@property (nonatomic,readonly) NSDate * birthdayDate; 
@property (nonatomic,readonly) NSString * keywordDescription; 
@required
+(unsigned long long)type;
-(NSString *)displayName;
-(NSString *)contactIdentifier;
-(NSString *)localIdentifier;
-(BOOL)isVerified;
-(NSDate *)birthdayDate;
-(NSString *)keywordDescription;
-(long long)compareToPerson:(id)arg1;
-(NSString *)suggestedContactIdentifier;
-(BOOL)isInferredChild;

@end

