/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSArray;

@interface FCFetchedValueDescriptor : NSObject

@property (nonatomic,readonly) NSArray * inputManagers; 
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isValue:(id)arg1 equalToValue:(id)arg2 ;
-(NSArray *)inputManagers;
-(id)fastCachedValue;
-(id)valuePromiseWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

