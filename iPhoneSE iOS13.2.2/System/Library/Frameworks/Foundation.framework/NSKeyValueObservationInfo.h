/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface NSKeyValueObservationInfo : NSObject {

	NSArray* _observances;
	unsigned long long _cachedHash;
	BOOL _cachedIsShareable;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_copyByAddingObservance:(id)arg1 ;
-(id)_initWithObservances:(id*)arg1 count:(unsigned long long)arg2 hashValue:(unsigned long long)arg3 ;
@end

