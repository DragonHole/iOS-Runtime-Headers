/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSArray;

@interface FCFetchedValueDescriptor : NSObject

@property (nonatomic,readonly) NSArray * inputManagers; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isValue:(id)arg1 equalToValue:(id)arg2 ;
-(NSArray *)inputManagers;
-(id)fastCachedValue;
-(id)valuePromiseWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 ;
@end

