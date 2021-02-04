/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol WBSTabItemSearchSupport <NSObject>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy) NSString * titleForLastSearch; 
@property (nonatomic,copy) NSArray * titleWords; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,copy) NSString * URLStringForLastSearch; 
@property (nonatomic,copy) NSArray * URLStringComponents; 
@property (nonatomic,copy) NSString * lastSearchTerm; 
@property (assign,nonatomic) BOOL matchedLastSearch; 
@required
-(NSString *)titleForLastSearch;
-(void)setTitleForLastSearch:(id)arg1;
-(NSArray *)titleWords;
-(void)setTitleWords:(id)arg1;
-(NSString *)URLStringForLastSearch;
-(void)setURLStringForLastSearch:(id)arg1;
-(NSArray *)URLStringComponents;
-(void)setURLStringComponents:(id)arg1;
-(BOOL)matchedLastSearch;
-(void)setMatchedLastSearch:(BOOL)arg1;
-(NSString *)lastSearchTerm;
-(void)setLastSearchTerm:(id)arg1;
-(NSString *)title;
-(NSString *)URLString;

@end
