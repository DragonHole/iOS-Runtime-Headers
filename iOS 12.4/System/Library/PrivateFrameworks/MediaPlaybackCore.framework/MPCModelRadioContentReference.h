/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICRadioContentReference;

@interface MPCModelRadioContentReference : NSObject <NSCopying, NSSecureCoding> {

	ICRadioContentReference* _ICRadioContentReference;

}

@property (nonatomic,readonly) ICRadioContentReference * ICRadioContentReference;              //@synthesize ICRadioContentReference=_ICRadioContentReference - In the implementation block
+(id)referenceWithMPModelObject:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(ICRadioContentReference *)ICRadioContentReference;
-(id)initWithICRadioContentReference:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
