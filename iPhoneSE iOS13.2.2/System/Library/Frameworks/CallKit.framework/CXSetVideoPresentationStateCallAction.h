/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetVideoPresentationStateCallAction : CXCallAction {

	long long _videoPresentationState;

}

@property (assign,nonatomic) long long videoPresentationState;              //@synthesize videoPresentationState=_videoPresentationState - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)customDescription;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(long long)videoPresentationState;
-(void)setVideoPresentationState:(long long)arg1 ;
-(id)initWithCallUUID:(id)arg1 videoPresentationState:(long long)arg2 ;
@end

