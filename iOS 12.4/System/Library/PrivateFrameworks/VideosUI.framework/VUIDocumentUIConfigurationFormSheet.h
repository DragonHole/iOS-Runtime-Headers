/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIDocumentUIConfigurationModal.h>

@interface VUIDocumentUIConfigurationFormSheet : VUIDocumentUIConfigurationModal {

	BOOL _tapDissmissable;
	CGSize _preferredSize;

}

@property (assign,nonatomic) CGSize preferredSize;                                       //@synthesize preferredSize=_preferredSize - In the implementation block
@property (assign,getter=isTapDissmissable,nonatomic) BOOL tapDissmissable;              //@synthesize tapDissmissable=_tapDissmissable - In the implementation block
-(void)setPreferredSize:(CGSize)arg1 ;
-(CGSize)preferredSize;
-(BOOL)isTapDissmissable;
-(void)setTapDissmissable:(BOOL)arg1 ;
@end

