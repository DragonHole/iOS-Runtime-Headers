/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMFWeakObject : HMFObject {

	id _object;
	unsigned long long _objectHash;

}

@property (nonatomic,readonly) unsigned long long objectHash;              //@synthesize objectHash=_objectHash - In the implementation block
@property (__weak,readonly) id object;                                     //@synthesize object=_object - In the implementation block
-(id)initWithWeakObject:(id)arg1 ;
-(unsigned long long)objectHash;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)object;
@end

