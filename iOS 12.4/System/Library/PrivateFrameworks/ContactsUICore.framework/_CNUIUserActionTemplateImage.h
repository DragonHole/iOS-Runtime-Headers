/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIUserActionTemplateImage.h>

@class NSString;

@interface _CNUIUserActionTemplateImage : NSObject <CNUIUserActionTemplateImage> {

	NSString* _imageName;

}

@property (nonatomic,readonly) NSString * imageName;                //@synthesize imageName=_imageName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)systemBlueIdentifer;
+(id)whiteIdentifier;
+(id)systemMidGrayIdentifier;
+(id)systemDarkGrayIdentifier;
+(id)thirtyPercentAlphaWhiteIdentifier;
+(id)resourceNameForImageName:(id)arg1 suffixIdentifier:(id)arg2 ;
-(id)imageWithSuffixIdentifier:(id)arg1 ;
-(id)initWithImageName:(id)arg1 ;
-(id)templateImage;
-(id)systemBlueImage;
-(id)whiteImage;
-(id)systemMidGrayImage;
-(id)systemDarkGrayImage;
-(id)thirtyPercentAlphaWhiteImage;
-(NSString *)imageName;
@end
