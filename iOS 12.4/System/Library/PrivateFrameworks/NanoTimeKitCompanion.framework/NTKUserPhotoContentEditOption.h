/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKEditOption.h>

@class NSString;

@interface NTKUserPhotoContentEditOption : NTKEditOption {

	BOOL _isDefaultPhoto;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;                  //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL isDefaultPhoto;              //@synthesize isDefaultPhoto=_isDefaultPhoto - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isDefaultPhoto;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)path;
@end

