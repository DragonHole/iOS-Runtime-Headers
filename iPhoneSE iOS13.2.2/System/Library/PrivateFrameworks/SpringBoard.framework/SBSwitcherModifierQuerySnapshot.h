/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface SBSwitcherModifierQuerySnapshot : NSObject {

	NSArray* _implementingQueryMethods;
	NSArray* _nonImplementingQueryMethods;
	NSDictionary* _queryMethodsToDescriptions;

}

@property (nonatomic,retain) NSArray * implementingQueryMethods;                     //@synthesize implementingQueryMethods=_implementingQueryMethods - In the implementation block
@property (nonatomic,retain) NSArray * nonImplementingQueryMethods;                  //@synthesize nonImplementingQueryMethods=_nonImplementingQueryMethods - In the implementation block
@property (nonatomic,retain) NSDictionary * queryMethodsToDescriptions;              //@synthesize queryMethodsToDescriptions=_queryMethodsToDescriptions - In the implementation block
-(NSArray *)implementingQueryMethods;
-(NSArray *)nonImplementingQueryMethods;
-(NSDictionary *)queryMethodsToDescriptions;
-(void)setQueryMethodsToDescriptions:(NSDictionary *)arg1 ;
-(void)setImplementingQueryMethods:(NSArray *)arg1 ;
-(void)setNonImplementingQueryMethods:(NSArray *)arg1 ;
@end

