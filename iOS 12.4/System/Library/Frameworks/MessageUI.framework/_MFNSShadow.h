/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSShadow;

@interface _MFNSShadow : NSObject <NSSecureCoding> {

	NSShadow* _shadow;

}

@property (nonatomic,retain) NSShadow * shadow;              //@synthesize shadow=_shadow - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithShadow:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSShadow *)shadow;
-(void)setShadow:(NSShadow *)arg1 ;
@end

