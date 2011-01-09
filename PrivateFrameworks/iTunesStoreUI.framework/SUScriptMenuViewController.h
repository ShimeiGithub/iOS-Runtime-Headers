/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptFunction;



@interface SUScriptMenuViewController : SUScriptViewController 
{
    SUScriptFunction *_action;
}

@property(retain) WebScriptObject *action;
@property(retain) id items;
@property(retain) NSNumber *selectedIndex;
@property(retain) NSString *title;

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (id)itemWithTitle:(id)arg1 userInfo:(id)arg2;
- (id)_copyAction;
- (id)_copyItems;
- (void)_setAction:(id)arg1;
- (void)_setItems:(id)arg1;
- (void)_setSelectedIndex:(NSInteger)arg1;
- (NSInteger)_selectedIndex;
- (id)_viewController;
- (id)newNativeViewController;
- (id)_copyTitle;
- (void)_setTitle:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)selectedIndex;
- (void)setSelectedIndex:(id)arg1;
- (id)action;
- (void)setItems:(id)arg1;
- (id)items;
- (id)title;
- (void)setAction:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (id)attributeKeys;

@end