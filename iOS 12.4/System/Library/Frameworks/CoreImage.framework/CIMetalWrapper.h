/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class NSMutableDictionary, NSString;

@interface CIMetalWrapper : CIFilter {

	NSMutableDictionary* _dict;
	NSString* inputFilterName;

}

@property (retain) NSMutableDictionary * _dict;              //@synthesize dict=_dict - In the implementation block
@property (copy) NSString * inputFilterName; 
-(id)dummyImagesForImages:(id)arg1 ;
-(void)set_dict:(NSMutableDictionary *)arg1 ;
-(NSString *)inputFilterName;
-(void)setInputFilterName:(NSString *)arg1 ;
-(id)inputKeys;
-(NSMutableDictionary *)_dict;
-(id)init;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)attributes;
-(id)outputImage;
@end

