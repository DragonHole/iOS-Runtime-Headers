/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>

@class WBSParsecImageRepresentation, NSString;

@interface WBSParsecSportsImage : WBSParsecModel {

	long long _alignment;
	WBSParsecImageRepresentation* _imageRepresentation;
	NSString* _label;
	NSString* _name;

}

@property (nonatomic,readonly) long long alignment;                                             //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * imageRepresentation;              //@synthesize imageRepresentation=_imageRepresentation - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
+(id)schema;
-(WBSParsecImageRepresentation *)imageRepresentation;
-(long long)alignment;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)label;
@end

