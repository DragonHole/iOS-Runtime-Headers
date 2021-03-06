/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSURL, NSString, NSDictionary, UIImage;

@interface _WKActivatedElementInfo : NSObject {

	RetainPtr<NSURL>* _URL;
	RetainPtr<NSURL>* _imageURL;
	RetainPtr<NSString>* _title;
	IntPoint _interactionLocation;
	RetainPtr<NSString>* _ID;
	RefPtr<WebKit::ShareableBitmap, WTF::DumbPtrTraits<WebKit::ShareableBitmap> >* _image;
	RetainPtr<UIImage>* _uiImage;
	RetainPtr<NSDictionary>* _userInfo;
	BOOL _animatedImage;
	long long _type;
	CGRect _boundingRect;

}

@property (nonatomic,readonly) IntPoint _interactionLocation; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSURL * imageURL; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CGRect boundingRect;                        //@synthesize boundingRect=_boundingRect - In the implementation block
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) BOOL isAnimatedImage; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,copy,readonly) UIImage * image; 
+(id)activatedElementInfoWithInteractionInformationAtPosition:(const InteractionInformationAtPosition*)arg1 ;
-(long long)type;
-(NSDictionary *)userInfo;
-(NSURL *)URL;
-(NSString *)title;
-(UIImage *)image;
-(CGRect)boundingRect;
-(IntPoint)_interactionLocation;
-(NSURL *)imageURL;
-(id)_initWithInteractionInformationAtPosition:(const InteractionInformationAtPosition*)arg1 ;
-(id)_initWithType:(long long)arg1 URL:(id)arg2 imageURL:(id)arg3 location:(const IntPoint*)arg4 title:(id)arg5 ID:(id)arg6 rect:(CGRect)arg7 image:(ShareableBitmap*)arg8 userInfo:(id)arg9 ;
-(id)_initWithType:(long long)arg1 URL:(id)arg2 imageURL:(id)arg3 location:(const IntPoint*)arg4 title:(id)arg5 ID:(id)arg6 rect:(CGRect)arg7 image:(ShareableBitmap*)arg8 ;
-(NSString *)ID;
-(BOOL)isAnimatedImage;
@end

