/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NTKUpNextComplicationConfiguration : NSObject <NSSecureCoding> {

	long long _family;

}

@property (nonatomic,readonly) long long family;              //@synthesize family=_family - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)bezelConfigurationWithMaskImage:(id)arg1 radius:(double)arg2 ;
+(id)graphicRectangularConfiguration;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)family;
-(id)initWithFamily:(long long)arg1 ;
-(id)_newPickerView;
@end

