/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/NSTextAttachment.h>

@class IKBadgeElement, IKColor;

@interface IKTextBadgeAttachment : NSTextAttachment {

	IKBadgeElement* _badge;
	IKColor* _tintColor;

}

@property (nonatomic,__weak,readonly) IKBadgeElement * badge;              //@synthesize badge=_badge - In the implementation block
@property (nonatomic,retain) IKColor * tintColor;                          //@synthesize tintColor=_tintColor - In the implementation block
-(id)initWithBadgeElement:(id)arg1 ;
-(void)setTintColor:(IKColor *)arg1 ;
-(IKColor *)tintColor;
-(IKBadgeElement *)badge;
@end

