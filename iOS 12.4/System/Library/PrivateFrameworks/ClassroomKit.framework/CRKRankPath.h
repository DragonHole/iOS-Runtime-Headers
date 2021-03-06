/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CRKRankPath : NSObject {

	NSArray* _ranks;

}

@property (nonatomic,copy) NSArray * ranks;                   //@synthesize ranks=_ranks - In the implementation block
@property (nonatomic,readonly) long long length; 
-(id)initWithRanks:(id)arg1 ;
-(NSArray *)ranks;
-(BOOL)isEqualToRankPath:(id)arg1 ;
-(id)initWithRank:(long long)arg1 ;
-(id)rankPathByAppendingRank:(long long)arg1 ;
-(void)setRanks:(NSArray *)arg1 ;
-(long long)length;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
@end

