/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber;

@interface ASMovedItem : ASItem {

	NSString* _srcMsgId;
	NSNumber* _status;
	NSString* _dstMsgId;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)srcMsgId;
-(id)dstMsgId;
-(void)setDstMsgId:(id)arg1 ;
-(void)setSrcMsgId:(id)arg1 ;
-(id)status;
-(void)setStatus:(id)arg1 ;
@end
