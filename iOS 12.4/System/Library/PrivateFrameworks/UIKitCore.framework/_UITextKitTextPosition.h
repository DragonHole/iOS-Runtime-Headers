/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextPosition.h>

@interface _UITextKitTextPosition : UITextPosition {

	long long _offset;
	long long _affinity;

}

@property (assign) long long offset;                //@synthesize offset=_offset - In the implementation block
@property (assign) long long affinity;              //@synthesize affinity=_affinity - In the implementation block
+(id)positionWithOffset:(long long)arg1 ;
+(id)positionWithOffset:(long long)arg1 affinity:(long long)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)offset;
-(void)setOffset:(long long)arg1 ;
-(void)setAffinity:(long long)arg1 ;
-(long long)affinity;
@end

