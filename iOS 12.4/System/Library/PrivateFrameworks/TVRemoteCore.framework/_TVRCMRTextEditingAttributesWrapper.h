/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@class NSString;

@interface _TVRCMRTextEditingAttributesWrapper : NSObject {

	void* _attributes;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * prompt; 
@property (nonatomic,readonly) MRTextInputTraits traits; 
-(NSString *)title;
-(NSString *)prompt;
-(id)initWithAttributes:(void*)arg1 ;
-(MRTextInputTraits)traits;
@end

