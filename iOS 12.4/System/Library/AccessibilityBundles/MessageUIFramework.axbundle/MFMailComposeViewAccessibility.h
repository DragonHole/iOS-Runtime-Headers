/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/AccessibilityBundles/MessageUIFramework.axbundle/MessageUIFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUIFramework/MessageUIFramework-Structs.h>
#import <MessageUIFramework/__MFMailComposeViewAccessibility_super.h>

@interface MFMailComposeViewAccessibility : __MFMailComposeViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)setFromAddressPickerVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_searchResultsTable;
-(id)dragSource:(id)arg1 draggableItemsAtPoint:(CGPoint)arg2 ;
-(void)dropTarget:(id)arg1 dragDidMoveToPoint:(CGPoint)arg2 ;
-(void)dropTarget:(id)arg1 dragEnteredAtPoint:(CGPoint)arg2 ;
-(BOOL)presentSearchResults:(id)arg1 ;
-(unsigned long long)_axIndexOfRecipient:(id)arg1 inArray:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 ;
-(BOOL)shouldGroupAccessibilityChildren;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)didMoveToSuperview;
@end

