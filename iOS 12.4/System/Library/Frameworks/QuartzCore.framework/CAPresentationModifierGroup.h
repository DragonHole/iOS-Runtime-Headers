/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@interface CAPresentationModifierGroup : NSObject {

	void* _shmem;
	unsigned long long _capacity;
	unsigned long long _count;

}

@property (readonly) unsigned long long capacity; 
@property (readonly) unsigned long long count; 
+(id)groupWithCapacity:(unsigned long long)arg1 ;
-(Shmem*)shmem;
-(unsigned long long)nextSlot;
-(void)resetBitMask;
-(void)markWritten:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)flush;
-(unsigned long long)capacity;
@end

