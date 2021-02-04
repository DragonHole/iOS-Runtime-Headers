/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface SKUIImagePlaceholder : NSObject {

	UIColor* _backgroundColor;
	UIColor* _borderColor;
	double _borderWidth;
	/*^block*/id _cornerPathBlock;

}

@property (nonatomic,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * borderColor;                  //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,readonly) double borderWidth;                     //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,copy,readonly) id cornerPathBlock;                //@synthesize cornerPathBlock=_cornerPathBlock - In the implementation block
-(id)cornerPathBlock;
-(id)initWithBackgroundColor:(id)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 cornerRadius:(double)arg4 ;
-(id)initWithBackgroundColor:(id)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 cornerPathBlock:(/*^block*/id)arg4 ;
-(UIColor *)backgroundColor;
-(double)borderWidth;
-(UIColor *)borderColor;
@end
