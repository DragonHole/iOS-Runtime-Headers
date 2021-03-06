/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFLocking.h>

@protocol NFLocking;
@interface FCMTWriterLock : NSObject <NFLocking> {

	id<NFLocking> _underlyingLock;

}

@property (nonatomic,retain) id<NFLocking> underlyingLock;              //@synthesize underlyingLock=_underlyingLock - In the implementation block
-(void)performWriteSync:(/*^block*/id)arg1 ;
-(void)performReadSync:(/*^block*/id)arg1 ;
-(id<NFLocking>)underlyingLock;
-(void)setUnderlyingLock:(id<NFLocking>)arg1 ;
-(id)initWithUnderlyingLock:(id)arg1 ;
-(id)init;
-(void)lock;
-(void)unlock;
@end

