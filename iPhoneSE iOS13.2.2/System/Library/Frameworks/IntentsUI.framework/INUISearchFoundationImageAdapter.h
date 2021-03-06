/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <SearchFoundation/SFImage.h>

@class NSValue, INImage;

@interface INUISearchFoundationImageAdapter : SFImage {

	NSValue* _sizeValue;
	INImage* _intentsImage;

}

@property (nonatomic,copy) INImage * intentsImage;              //@synthesize intentsImage=_intentsImage - In the implementation block
+(void)initialize;
+(id)_sharedImageLoader;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)size;
-(int)source;
-(void)setSize:(CGSize)arg1 ;
-(void)loadImageDataWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
-(void)loadImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithPayloadImage:(id)arg1 ;
-(id)initWithIntentsImage:(id)arg1 ;
-(id)payloadImage;
-(INImage *)intentsImage;
-(void)setIntentsImage:(INImage *)arg1 ;
@end

