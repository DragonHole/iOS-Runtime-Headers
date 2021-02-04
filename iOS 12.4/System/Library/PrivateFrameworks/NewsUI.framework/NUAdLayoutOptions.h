/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUAdLayoutOptions.h>

@protocol NUAdLayoutOptions <NSObject>
@property (nonatomic,readonly) CGSize containerSize; 
@required
-(CGSize)containerSize;

@end


@class NSString;

@interface NUAdLayoutOptions : NSObject <NUAdLayoutOptions> {

	CGSize _containerSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize containerSize;                //@synthesize containerSize=_containerSize - In the implementation block
-(id)initWithContainerSize:(CGSize)arg1 ;
-(CGSize)containerSize;
@end
