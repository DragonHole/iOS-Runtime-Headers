/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLocking.h>

@interface HMFUnfairLock : HMFObject <HMFLocking> {

	unsigned long long _options;

}

@property (readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
+(id)lockWithOptions:(unsigned long long)arg1 ;
+(id)lock;
-(void)assertOwner;
-(void)assertNotOwner;
-(id)init;
-(unsigned long long)options;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)lock;
-(void)unlock;
@end

