/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudQuotaUI/iCloudQuotaUI-Structs.h>
#import <UIKitCore/UITextView.h>

@class NSString, NSArray, NSDictionary;

@interface _ICQTextView : UITextView {

	NSString* _format;
	NSArray* _links;
	NSDictionary* _attributes;

}

@property (nonatomic,retain) NSString * format;                      //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSArray * links;                        //@synthesize links=_links - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(void)setFormat:(NSString *)arg1 ;
-(void)setLinks:(NSArray *)arg1 ;
-(NSArray *)links;
-(void)setAttributedText;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSString *)format;
@end

