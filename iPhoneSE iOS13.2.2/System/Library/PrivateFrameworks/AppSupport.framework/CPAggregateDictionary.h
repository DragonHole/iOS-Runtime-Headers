/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CPAggregateDictionary : NSObject

@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
+(id)sharedAggregateDictionary;
-(BOOL)isEnabled;
-(int)commit;
-(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
-(void)clearScalarKey:(id)arg1 ;
-(void)setValue:(double)arg1 forDistributionKey:(id)arg2 ;
-(void)clearDistributionKey:(id)arg1 ;
-(void)significantTimeChanged;
-(void)incrementKey:(id)arg1 ;
-(void)decrementKey:(id)arg1 ;
-(void)addValue:(long long)arg1 forKey:(id)arg2 ;
-(void)subtractValue:(long long)arg1 forKey:(id)arg2 ;
-(void)pushValue:(double)arg1 forKey:(id)arg2 ;
@end
