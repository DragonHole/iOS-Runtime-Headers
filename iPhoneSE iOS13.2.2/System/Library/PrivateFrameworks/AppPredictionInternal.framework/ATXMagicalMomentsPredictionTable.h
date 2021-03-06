/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface ATXMagicalMomentsPredictionTable : NSObject <NSSecureCoding> {

	NSMutableArray* _predictionTableEntries;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPredictionTableEntries:(id)arg1 ;
-(id)describeTable;
-(void)addPredictions:(id)arg1 withApplicablePredicates:(id)arg2 ;
-(void)addPrediction:(id)arg1 withApplicablePredicates:(id)arg2 ;
-(id)predictionTableEntries;
-(id)validPredictionsFromTableEntries:(id)arg1 event:(id)arg2 ;
-(id)deduplicatePredictions:(id)arg1 ;
-(id)removeRestrictedPredictions:(id)arg1 ;
-(id)predictionsForTriggerEvent:(id)arg1 ;
@end

