/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class IMPluginPayload, UIImage;

@interface CKPluginDisplayContainer : NSObject <NSSecureCoding> {

	IMPluginPayload* _pluginPayload;
	UIImage* _composeImage;

}

@property (nonatomic,retain) IMPluginPayload * pluginPayload;              //@synthesize pluginPayload=_pluginPayload - In the implementation block
@property (nonatomic,retain) UIImage * composeImage;                       //@synthesize composeImage=_composeImage - In the implementation block
+(id)pluginDisplayContinerWithPluginPayload:(id)arg1 composeImage:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)pasteboardItem;
-(IMPluginPayload *)pluginPayload;
-(UIImage *)composeImage;
-(void)setPluginPayload:(IMPluginPayload *)arg1 ;
-(void)setComposeImage:(UIImage *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)itemProvider;
@end

