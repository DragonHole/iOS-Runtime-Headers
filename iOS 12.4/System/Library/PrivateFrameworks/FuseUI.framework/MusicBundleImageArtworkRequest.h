/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class NSBundle, NSString, UIColor;

@interface MusicBundleImageArtworkRequest : NSObject <MPArtworkDataSourceVisualIdenticality> {

	NSBundle* _bundle;
	NSString* _imageName;
	long long _renderingMode;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) NSBundle * bundle;                      //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageName;              //@synthesize imageName=_imageName - In the implementation block
@property (assign,nonatomic) long long renderingMode;                  //@synthesize renderingMode=_renderingMode - In the implementation block
@property (nonatomic,copy) UIColor * tintColor;                        //@synthesize tintColor=_tintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImageName:(id)arg1 inBundle:(id)arg2 ;
-(void)setRenderingMode:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(long long)renderingMode;
-(NSBundle *)bundle;
-(NSString *)imageName;
-(id)stringRepresentation;
@end

