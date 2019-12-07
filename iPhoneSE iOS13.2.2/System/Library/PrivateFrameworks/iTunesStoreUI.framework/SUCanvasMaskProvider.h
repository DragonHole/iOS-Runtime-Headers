/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUMaskProvider.h>

@class SUScriptCanvasFunction;

@interface SUCanvasMaskProvider : SUMaskProvider {

	SUScriptCanvasFunction* _function;

}
-(void)dealloc;
-(id)initWithFunction:(id)arg1 ;
-(CGPathRef)copyPathForMaskWithSize:(CGSize)arg1 ;
-(id)copyMaskImageWithSize:(CGSize)arg1 ;
@end
