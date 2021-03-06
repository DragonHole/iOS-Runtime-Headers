/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface HMCameraStreamVideoPreferences : NSObject <NSSecureCoding> {

	NSSet* _resolutions;

}

@property (nonatomic,readonly) NSSet * resolutions;              //@synthesize resolutions=_resolutions - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)resolutions;
-(id)initWithResolutions:(id)arg1 ;
@end

