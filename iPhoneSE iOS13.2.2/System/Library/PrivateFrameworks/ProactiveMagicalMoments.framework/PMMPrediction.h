/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface PMMPrediction : NSObject {

	NSArray* _predictedItems;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) NSArray * predictedItems;              //@synthesize predictedItems=_predictedItems - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)expirationDate;
-(id)initWithPredictedItems:(id)arg1 expirationDate:(id)arg2 ;
-(BOOL)isEqualToPrediction:(id)arg1 ;
-(NSArray *)predictedItems;
@end
