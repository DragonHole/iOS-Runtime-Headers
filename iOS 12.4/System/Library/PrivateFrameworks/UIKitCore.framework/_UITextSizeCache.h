/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UITextSizeCache : NSObject {

	ui_size_cache* _cache;

}
-(id)description;
-(BOOL)getSize:(CGSize*)arg1 baselineInfo:(SCD_Struct_UI106*)arg2 forTargetSize:(CGSize)arg3 isMultiline:(BOOL)arg4 ;
-(void)addSize:(CGSize)arg1 baselineInfo:(SCD_Struct_UI106*)arg2 forTargetSize:(CGSize)arg3 ;
-(void)removeAllSizes;
@end

